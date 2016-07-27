
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@protocol IGInviteFBFriendCellDelegate;
@class IGMediaThumbnailView, UILabel, IGInviteButton, UIView, NSString;

@interface IGInviteFBFriendCell : UICollectionViewCell {

	char _isInvited;
	id<IGInviteFBFriendCellDelegate> _delete;
	IGMediaThumbnailView* _profilePictureView;
	UILabel* _nameLabel;
	IGInviteButton* _inviteButton;
	UIView* _bottomLine;
	NSString* _fbID;

}

@property (nonatomic,readonly) IGMediaThumbnailView * profilePictureView;                 //@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) IGInviteButton * inviteButton;                             //@synthesize inviteButton=_inviteButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomLine;                                       //@synthesize bottomLine=_bottomLine - In the implementation block
@property (nonatomic,copy,readonly) NSString * fbID;                                      //@synthesize fbID=_fbID - In the implementation block
@property (assign,nonatomic) char isInvited;                                              //@synthesize isInvited=_isInvited - In the implementation block
@property (assign,nonatomic,__weak) id<IGInviteFBFriendCellDelegate> delete;              //@synthesize delete=_delete - In the implementation block
+(float)defaulCellWidth;
+(float)defaulCellHeight;
-(IGMediaThumbnailView *)profilePictureView;
-(NSString *)fbID;
-(char)isInvited;
-(void)setIsInvited:(char)arg1 ;
-(id)createNameLabel;
-(void)didTapInviteButton;
-(IGInviteButton *)inviteButton;
-(void)configureCellWithFBUserInfo:(id)arg1 ;
-(void)setDelete:(id<IGInviteFBFriendCellDelegate>)arg1 ;
-(void)updateInviteStatus:(char)arg1 ;
-(UIView *)bottomLine;
-(UILabel *)nameLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<IGInviteFBFriendCellDelegate>)delete;
@end

