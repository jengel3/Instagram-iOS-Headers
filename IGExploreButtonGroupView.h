
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface IGExploreButtonGroupView : UIView {

	char _usingRequestButton;
	char _followingVisible;
	UIButton* _followButton;
	UIButton* _followingButton;
	UIButton* _requestedButton;
	UIButton* _dismissButton;

}

@property (nonatomic,readonly) UIButton * followButton;                                        //@synthesize followButton=_followButton - In the implementation block
@property (nonatomic,readonly) UIButton * followingButton;                                     //@synthesize followingButton=_followingButton - In the implementation block
@property (nonatomic,readonly) UIButton * requestedButton;                                     //@synthesize requestedButton=_requestedButton - In the implementation block
@property (nonatomic,readonly) UIButton * dismissButton;                                       //@synthesize dismissButton=_dismissButton - In the implementation block
@property (assign,getter=isUsingRequestButton,nonatomic) char usingRequestButton;              //@synthesize usingRequestButton=_usingRequestButton - In the implementation block
@property (assign,getter=isFollowingVisible,nonatomic) char followingVisible;                  //@synthesize followingVisible=_followingVisible - In the implementation block
-(void)setUsingRequestButton:(char)arg1 ;
-(void)setFollowingVisible:(char)arg1 animated:(char)arg2 ;
-(UIButton *)followButton;
-(UIButton *)followingButton;
-(UIButton *)requestedButton;
-(char)isUsingRequestButton;
-(char)isFollowingVisible;
-(void)setFollowingVisible:(char)arg1 ;
-(id)initShowingDismissButton:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIButton *)dismissButton;
@end

