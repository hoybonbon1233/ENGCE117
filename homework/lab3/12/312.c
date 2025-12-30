#include <stdio.h>

int main() {
    int N_Calculations, I ;
    int AttackerLevel, OpponentLevel, OpponentArmor ;
    float BaseAttack, DamageReduction, NetDamage, DamageDeficit ;
    const float WorthThreshold = 150.0 ;

    if (scanf("%d", &N_Calculations) != 1) {
        return 1 ;
    }

    for (I = 0 ; I < N_Calculations ; I++) {
        if (scanf("%d %d %d", &AttackerLevel, &OpponentLevel, &OpponentArmor) != 3) {
            break ;
        }

        BaseAttack = AttackerLevel * 10.0 ;

        if (OpponentArmor < 50) {
            DamageReduction = 0.20 ;
        } else {
            DamageReduction = 0.40 ;
        }

        NetDamage = BaseAttack * (1.0 - DamageReduction) ;

        if (NetDamage >= WorthThreshold) {
            printf("SUCCESS! Net Damage: %.2f\n", NetDamage) ;
        } else {
            DamageDeficit = WorthThreshold - NetDamage ;
            printf("FAIL. Deficit: %.2f\n", DamageDeficit) ;
        }
    }

    return 0 ;
}