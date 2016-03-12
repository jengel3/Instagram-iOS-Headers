
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGFollowAllButton, UILabel;

@interface IGFollowAllUsersView : UIView {

	IGFollowAllButton* _followAllButton;
	unsigned _userCount;
	float _horizontalPadding;
	UILabel* _countLabel;

}

@property (nonatomic,retain) IGFollowAllButton * followAllButton;              //@synthesize followAllButton=_followAllButton - In the implementation block
@property (assign,nonatomic) unsigned userCount;                               //@synthesize userCount=_userCount - In the implementation block
@property (assign,nonatomic) float horizontalPadding;                          //@synthesize horizontalPadding=_horizontalPadding - In the implementation block
@property (nonatomic,retain) UILabel * countLabel;                             //@synthesize countLabel=_countLabel - In the implementation block
+(float)preferredHeight;
-(void)setUserCount:(unsigned)arg1 ;
-(IGFollowAllButton *)followAllButton;
-(unsigned)userCount;
-(UILabel *)countLabel;
-(void)setCountLabel:(UILabel *)arg1 ;
-(void)setFollowAllButton:(IGFollowAllButton *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHorizontalPadding:(float)arg1 ;
-(float)horizontalPadding;
@end

