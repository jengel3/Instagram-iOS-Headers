

@interface FBSDKLoginManagerSystemAccountState : NSObject {

	char _didShowDialog;
	char _reauthorize;
	char _unTOSedDevice;

}

@property (assign,nonatomic) char didShowDialog;                                     //@synthesize didShowDialog=_didShowDialog - In the implementation block
@property (assign,getter=isReauthorize,nonatomic) char reauthorize;                  //@synthesize reauthorize=_reauthorize - In the implementation block
@property (assign,getter=isUnTOSedDevice,nonatomic) char unTOSedDevice;              //@synthesize unTOSedDevice=_unTOSedDevice - In the implementation block
-(void)setDidShowDialog:(char)arg1 ;
-(void)setReauthorize:(char)arg1 ;
-(void)setUnTOSedDevice:(char)arg1 ;
-(char)isReauthorize;
-(char)isUnTOSedDevice;
-(char)didShowDialog;
@end

