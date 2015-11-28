
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@protocol IGTabBarButtonSupplementaryViewProtocol;
@class UIView, UIImageView;

@interface IGTabBarButton : UIButton {

	char _needsAttention;
	char _clearsAttentionWhenSelected;
	UIView*<IGTabBarButtonSupplementaryViewProtocol> _supplementaryView;
	UIImageView* _markView;

}

@property (assign,nonatomic) char needsAttention;                                                             //@synthesize needsAttention=_needsAttention - In the implementation block
@property (assign,nonatomic) char clearsAttentionWhenSelected;                                                //@synthesize clearsAttentionWhenSelected=_clearsAttentionWhenSelected - In the implementation block
@property (nonatomic,retain) UIView*<IGTabBarButtonSupplementaryViewProtocol> supplementaryView;              //@synthesize supplementaryView=_supplementaryView - In the implementation block
@property (nonatomic,retain) UIImageView * markView;                                                          //@synthesize markView=_markView - In the implementation block
+(id)cameraButton;
+(id)profileButton;
+(id)homeButton;
+(id)exploreButton;
+(id)newsButton;
+(id)directButton;
+(id)profileButtonWithProfilePictureImageView:(id)arg1 ;
-(void)setClearsAttentionWhenSelected:(char)arg1 ;
-(void)setSupplementaryView:(UIView*<IGTabBarButtonSupplementaryViewProtocol>)arg1 ;
-(UIImageView *)markView;
-(void)updateMark;
-(UIView*<IGTabBarButtonSupplementaryViewProtocol>)supplementaryView;
-(char)needsAttention;
-(char)clearsAttentionWhenSelected;
-(void)setNeedsAttention:(char)arg1 ;
-(void)setMarkView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(char)arg1 ;
@end

