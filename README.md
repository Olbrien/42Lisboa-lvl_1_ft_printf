# ft_printf
Update: 31-01-2021

Está quase. Falta as conversions bónus "nfge", resto parece estar tudo bem. 

Update: 02-02-2021

Já fizeste o Float para casos normais e arredondados. Vais para o precision agora.

Update: 06-02-2021

Já fizeste o Float para os precisions. Vais agora para os # (altform).

Update: 07-02-2021

Floats já estão bons. Não há ll, l, h, hh de floats. Vais fazer agora a norminette e começar o 'e'.

Update: 13-02-2021

Norminette feita. "l" de 'c' e 's' estão feitos. Não conseguiste fazer o 'g'. Fraco.
<pre>
./reset-to-default-enabled-tests
./disable-test notintsubject_o
./enable-test bonus_length
./enable-test bonus_af
./enable-test bonus_sp
./enable-test bonus_as
./enable-test "bonus*_f_"
./enable-test "bonus*_n_"
./enable-test nocrash
./disable-test "bonus_notrequired"
./test
</pre>


# get_next_line


###### <i>Recent Update on 13/02/2021.</i>
Added lvl_1_get_next_line_old_norm.

###### <i>Old Update on 11/02/2021.</i>
Changed README.md structure.

###### <i>Old Update on 10/02/2021.</i>
Done with Norminette v3.

**** Tests ****

[42cursus_gnl_tests](https://github.com/mrjvs/42cursus_gnl_tests)\
[42TESTERS-GNL](https://github.com/Mazoise/42TESTERS-GNL)

**** Results ****

![GitHub Logo](/extras/images/gavinfielder_pft.png)
