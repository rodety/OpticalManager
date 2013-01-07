-------------------------------
-- Data for table `opticaldb`.`tipodoc_ident`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`tipodoc_ident` (`idtipodoc_ident`, `nombre`, `size`) VALUES (1, 'dni', 8);

COMMIT;

-- -----------------------------------------------------
-- Data for table `opticaldb`.`persona`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`persona` (`idpersona`, `idtipodoc_ident`, `nombre`, `primer_appellido`, `segundo_apellido`, `nro_doc`, `direccion`, `sexo`, `fecha_nacimiento`, `telefono`, `celular`) VALUES (1, 1, 'Serigio', 'Vergara', 'Telechea', 12345678, 'que te importa 103', 1, '01-01-1990', '123456', '123456789');

COMMIT;

-- -----------------------------------------------------
-- Data for table `opticaldb`.`tipo_colaborador`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`tipo_colaborador` (`idtipo_colaborador`, `nombre`) VALUES (1, 'administrador');

COMMIT;

-- -----------------------------------------------------
-- Data for table `opticaldb`.`empresa`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`empresa` (`idempresa`, `ruc`, `raz_social`, `domicilio_fiscal`, `telefono`) VALUES (1, 12345678901, 'Empresa Prueba', 'Direccion de prueba', '123456');

COMMIT;

-- -----------------------------------------------------
-- Data for table `opticaldb`.`tienda`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`tienda` (`idtienda`, `idempresa`, `alias`, `direccion`, `telefono`, `permiso_municipal`) VALUES (1, 1, 'tienda_Prueba', 'direcion tienda prueba 123', '123456', 'xxxxxxxx');

COMMIT;

-- -----------------------------------------------------
-- Data for table `opticaldb`.`colaborador`
-- -----------------------------------------------------
START TRANSACTION;
USE `opticaldb`;
INSERT INTO `opticaldb`.`colaborador` (`idcolaborador`, `idtipo_colaborador`, `idtienda`, `telf_familiar`, `observaciones`, `nombre_usuario`, `habilitado`, `pass`, `reset_pass`) VALUES (1, 1, 1, '12345', 'qwerty', 'svergarat', 1, MD5(1234), 0);

COMMIT;
