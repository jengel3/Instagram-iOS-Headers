/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:42 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IGCameraAccessPromptView, IGLibraryAccessPromptView, UIView;

@interface IGQuickCamViewManager : NSObject {

	IGCameraAccessPromptView* _cameraPermissionDeniedView;
	IGLibraryAccessPromptView* _libraryAccessDeniedView;
	UIView* _contentContainerView;

}

@property (nonatomic,retain) IGCameraAccessPromptView * cameraPermissionDeniedView;              //@synthesize cameraPermissionDeniedView=_cameraPermissionDeniedView - In the implementation block
@property (nonatomic,retain) IGLibraryAccessPromptView * libraryAccessDeniedView;                //@synthesize libraryAccessDeniedView=_libraryAccessDeniedView - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentContainerView;                               //@synthesize contentContainerView=_contentContainerView - In the implementation block
-(void)showAudioPermissionsDeniedAlertView;
-(IGLibraryAccessPromptView *)libraryAccessDeniedView;
-(void)setLibraryAccessDeniedView:(IGLibraryAccessPromptView *)arg1 ;
-(void)showCameraPermissionDeniedView;
-(IGCameraAccessPromptView *)cameraPermissionDeniedView;
-(void)setCameraPermissionDeniedView:(IGCameraAccessPromptView *)arg1 ;
-(id)initWithContentContainerView:(id)arg1 ;
-(void)showDiscardEditsAlertViewWithDiscardBlock:(/*^block*/id)arg1 keepBlock:(/*^block*/id)arg2 ;
-(void)showPickDisabledAssetAnimation:(id)arg1 ;
-(void)showLibraryAccessDeniedView;
-(UIView *)contentContainerView;
-(void)setContentContainerView:(UIView *)arg1 ;
@end
