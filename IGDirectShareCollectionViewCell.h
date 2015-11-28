
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class NSArray, IGDirectThreadAvatarView, UILabel, UIView;

@interface IGDirectShareCollectionViewCell : UICollectionViewCell {

	char _showWhiteOverlay;
	char _showBlueRing;
	NSArray* _users;
	IGDirectThreadAvatarView* _profileView;
	UILabel* _usernameLabel;
	UILabel* _detailLabel;
	UIView* _whiteOverlay;
	UIView* _blueRing;

}

@property (nonatomic,retain) NSArray * users;                                     //@synthesize users=_users - In the implementation block
@property (assign,nonatomic) char showWhiteOverlay;                               //@synthesize showWhiteOverlay=_showWhiteOverlay - In the implementation block
@property (assign,nonatomic) char showBlueRing;                                   //@synthesize showBlueRing=_showBlueRing - In the implementation block
@property (nonatomic,retain) IGDirectThreadAvatarView * profileView;              //@synthesize profileView=_profileView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                             //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                               //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIView * whiteOverlay;                               //@synthesize whiteOverlay=_whiteOverlay - In the implementation block
@property (nonatomic,retain) UIView * blueRing;                                   //@synthesize blueRing=_blueRing - In the implementation block
+(float)contractedCellWidth;
+(float)cellHeight;
-(void)setShowWhiteOverlay:(char)arg1 ;
-(UIView *)whiteOverlay;
-(char)showWhiteOverlay;
-(void)setWhiteOverlay:(UIView *)arg1 ;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(IGDirectThreadAvatarView *)profileView;
-(char)showBlueRing;
-(void)setShowBlueRing:(char)arg1 ;
-(void)showWhiteOverlay:(char)arg1 withAnimation:(char)arg2 ;
-(void)setProfileView:(IGDirectThreadAvatarView *)arg1 ;
-(UIView *)blueRing;
-(void)setBlueRing:(UIView *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setUsernameText:(id)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end

