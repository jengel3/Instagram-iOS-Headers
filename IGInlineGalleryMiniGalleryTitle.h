
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>
#import <Instagram/IGInlineGalleryTitleBar.h>

@protocol IGInlineGalleryTitleBarDelegate;
@class UILabel, UIButton;

@interface IGInlineGalleryMiniGalleryTitle : UIView <IGInlineGalleryTitleBar> {

	UILabel* _label;
	UIButton* _cameraButton;
	id<IGInlineGalleryTitleBarDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGInlineGalleryTitleBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapTitleBar;
-(void)didTapCamera;
-(void)didTapSeeAll;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGInlineGalleryTitleBarDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<IGInlineGalleryTitleBarDelegate>)delegate;
@end

