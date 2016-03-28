

@protocol IGQuickCamControlBarDelegate <NSObject>
@required
-(void)quickCamControlBarDidTapSwitchCamerasButton;
-(void)quickCamControlBarDidTapBoomerangButton;
-(void)quickCamControlBarDidTapBackButton;
-(void)quickCamControlBarDidStartCrop;
-(void)quickCamControlBarDidFinishCrop;

@end

