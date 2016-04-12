
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView;

@interface IGTabBarButton : UIButton {

	char _needsAttention;
	char _clearsAttentionWhenSelected;
	UIView* _viewForVibrancyEffect;
	UIView* _customView;
	UIImageView* _markView;

}

@property (assign,nonatomic) char needsAttention;                           //@synthesize needsAttention=_needsAttention - In the implementation block
@property (assign,nonatomic) char clearsAttentionWhenSelected;              //@synthesize clearsAttentionWhenSelected=_clearsAttentionWhenSelected - In the implementation block
@property (nonatomic,retain) UIView * viewForVibrancyEffect;                //@synthesize viewForVibrancyEffect=_viewForVibrancyEffect - In the implementation block
@property (nonatomic,retain) UIView * customView;                           //@synthesize customView=_customView - In the implementation block
@property (nonatomic,retain) UIImageView * markView;                        //@synthesize markView=_markView - In the implementation block
+(id)cameraButton;
+(char)shouldUseNewIcons;
+(id)tabBarButtonWithIconNamed:(id)arg1 highlightedIconNamed:(id)arg2 ;
+(id)profileButton;
+(id)homeButton;
+(id)exploreButton;
+(id)newsButton;
+(id)profileButtonWithProfilePictureImageView:(id)arg1 ;
-(void)setClearsAttentionWhenSelected:(char)arg1 ;
-(void)setViewForVibrancyEffect:(UIView *)arg1 ;
-(UIImageView *)markView;
-(void)updateMark;
-(char)needsAttention;
-(char)clearsAttentionWhenSelected;
-(void)setNeedsAttention:(char)arg1 ;
-(UIView *)viewForVibrancyEffect;
-(void)setMarkView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIView *)customView;
-(void)setCustomView:(UIView *)arg1 ;
@end

