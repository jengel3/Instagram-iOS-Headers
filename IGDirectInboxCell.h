
#import <UIKit/UITableViewCell.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol IGDirectInboxCellDelegate;
@class NSArray, IGDate, NSURL, UILabel, IGDirectThreadAvatarView, UIImageView, IGImageView, IGDirectInboxActionView, UIView, UIPanGestureRecognizer, NSString;

@interface IGDirectInboxCell : UITableViewCell <UIGestureRecognizerDelegate> {

	char _pendingDeleteAction;
	char _showsMuteIcon;
	NSArray* _users;
	IGDate* _date;
	NSURL* _imageURL;
	UILabel* _nameLabel;
	UILabel* _messageLabel;
	NSArray* _inboxActions;
	id<IGDirectInboxCellDelegate> _delegate;
	float _profilePictureVerticalPadding;
	IGDirectThreadAvatarView* _profilePicture;
	UIImageView* _newContentDot;
	UIImageView* _muteImageView;
	IGImageView* _thumbnailImageView;
	UILabel* _timeLabel;
	IGDirectInboxActionView* _actionView;
	UIView* _swipeableView;
	float _currentSwipeDistance;
	UIPanGestureRecognizer* _panGestureRecognizer;
	float _startSwipeGestureX;

}

@property (nonatomic,retain) NSArray * users;                                            //@synthesize users=_users - In the implementation block
@property (nonatomic,retain) IGDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSURL * imageURL;                                           //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) char pendingDeleteAction;                                   //@synthesize pendingDeleteAction=_pendingDeleteAction - In the implementation block
@property (assign,nonatomic) char showsMuteIcon;                                         //@synthesize showsMuteIcon=_showsMuteIcon - In the implementation block
@property (nonatomic,retain) UILabel * nameLabel;                                        //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                     //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) NSArray * inboxActions;                                     //@synthesize inboxActions=_inboxActions - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float profilePictureVerticalPadding;                        //@synthesize profilePictureVerticalPadding=_profilePictureVerticalPadding - In the implementation block
@property (nonatomic,retain) IGDirectThreadAvatarView * profilePicture;                  //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) UIImageView * newContentDot;                                //@synthesize newContentDot=_newContentDot - In the implementation block
@property (nonatomic,retain) UIImageView * muteImageView;                                //@synthesize muteImageView=_muteImageView - In the implementation block
@property (nonatomic,retain) IGImageView * thumbnailImageView;                           //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) UILabel * timeLabel;                                        //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,retain) IGDirectInboxActionView * actionView;                       //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UIView * swipeableView;                                     //@synthesize swipeableView=_swipeableView - In the implementation block
@property (assign,nonatomic) float currentSwipeDistance;                                 //@synthesize currentSwipeDistance=_currentSwipeDistance - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;              //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) float startSwipeGestureX;                                   //@synthesize startSwipeGestureX=_startSwipeGestureX - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)heightForCellWithPadding:(float)arg1 ;
-(void)setInboxActions:(NSArray *)arg1 ;
-(void)setSwipeableView:(UIView *)arg1 ;
-(UIView *)swipeableView;
-(void)onSwipePan:(id)arg1 ;
-(IGDirectThreadAvatarView *)profilePicture;
-(UIImageView *)newContentDot;
-(UIImageView *)muteImageView;
-(float)currentSwipeDistance;
-(void)updateActionViewBasedOnSwipeDistance:(float)arg1 ;
-(float)profilePictureVerticalPadding;
-(char)showsMuteIcon;
-(int)profileBorderStyle;
-(float)startSwipeGestureX;
-(void)setCurrentSwipeDistance:(float)arg1 ;
-(void)openActionMenu;
-(void)closeActionMenu;
-(void)setStartSwipeGestureX:(float)arg1 ;
-(char)hasActionMenuOpen;
-(void)setNewContent:(char)arg1 ;
-(void)setPendingDeleteAction:(char)arg1 ;
-(void)setShowsMuteIcon:(char)arg1 ;
-(char)pendingDeleteAction;
-(NSArray *)inboxActions;
-(void)setProfilePictureVerticalPadding:(float)arg1 ;
-(void)setProfilePicture:(IGDirectThreadAvatarView *)arg1 ;
-(void)setNewContentDot:(UIImageView *)arg1 ;
-(void)setMuteImageView:(UIImageView *)arg1 ;
-(void)setThumbnailImageView:(IGImageView *)arg1 ;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)setDetailText:(id)arg1 ;
-(void)setDelegate:(id<IGDirectInboxCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGDirectInboxCellDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(IGDate *)date;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(void)prepareForReuse;
-(UILabel *)messageLabel;
-(void)setDate:(IGDate *)arg1 ;
-(IGDirectInboxActionView *)actionView;
-(void)setActionView:(IGDirectInboxActionView *)arg1 ;
-(void)setTimeLabel:(UILabel *)arg1 ;
-(UILabel *)timeLabel;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
-(IGImageView *)thumbnailImageView;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

