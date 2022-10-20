modded class MassPPSH41 {
	override RecoilBase SpawnRecoilObject(){
		return new MassPPSHRecoil(this);
	}
}