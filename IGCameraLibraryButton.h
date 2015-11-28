
#import <UIKit/UIView.h>

@class UIImageView, IGSimpleButton;

@interface IGCameraLibraryButton : UIView {

	int _assetType;
	UIImageView* _imageView;
	IGSimpleButton* _button;

}

@property (assign,nonatomic) char enabled; 
@property (assign,nonatomic) int assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) IGSimpleButton * button;              //@synthesize button=_button - In the implementation block
-(void)setImageToLastLibraryImage;
-(char)enabled;
-(IGSimpleButton *)button;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(UIImageView *)imageView;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)initWithAssetType:(int)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setButton:(IGSimpleButton *)arg1 ;
-(int)assetType;
-(void)setAssetType:(int)arg1 ;
@end

