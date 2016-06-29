
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGCellSwipeActionManagerActionDelegate.h>

@protocol IGDirectInboxThreadCellInteractionDelegate, IGDirectInboxThreadCellSwipingDelegate;
@class UIImageView, IGDirectThreadAvatarView, UILabel, IGImageView, IGCellSwipeActionManager, UIButton, NSString;

@interface IGDirectInboxThreadCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate> {

	char _isOpen;
	id<IGDirectInboxThreadCellInteractionDelegate> _interactionDelegate;
	id<IGDirectInboxThreadCellSwipingDelegate> _swipeDelegate;
	UIImageView* _indicatorView;
	IGDirectThreadAvatarView* _avatarView;
	UILabel* _usernameLabel;
	UILabel* _messageLabel;
	UILabel* _timestampLabel;
	UIImageView* _muteIcon;
	IGImageView* _mediaThumbnailView;
	IGCellSwipeActionManager* _cellSwipeActionManager;
	UIButton* _muteButton;
	UIButton* _deleteButton;

}

@property (nonatomic,readonly) UIImageView * indicatorView;                                                          //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) IGDirectThreadAvatarView * avatarView;                                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * usernameLabel;                                                              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                                                               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timestampLabel;                                                             //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * muteIcon;                                                               //@synthesize muteIcon=_muteIcon - In the implementation block
@property (nonatomic,readonly) IGImageView * mediaThumbnailView;                                                     //@synthesize mediaThumbnailView=_mediaThumbnailView - In the implementation block
@property (nonatomic,readonly) IGCellSwipeActionManager * cellSwipeActionManager;                                    //@synthesize cellSwipeActionManager=_cellSwipeActionManager - In the implementation block
@property (nonatomic,readonly) UIButton * muteButton;                                                                //@synthesize muteButton=_muteButton - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                                              //@synthesize deleteButton=_deleteButton - In the implementation block
@property (assign,nonatomic) char isOpen;                                                                            //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadCellInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadCellSwipingDelegate> swipeDelegate;                        //@synthesize swipeDelegate=_swipeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithViewModel:(id)arg1 ;
-(UILabel *)usernameLabel;
-(void)showActions:(char)arg1 animated:(char)arg2 ;
-(void)setupIndicatorView;
-(void)setupAvatarView;
-(void)setupUsernameLabel;
-(void)setupMessageLabel;
-(void)setupTimestampLabel;
-(void)setupMuteIcon;
-(void)setupMediaThumbnailView;
-(void)setupSwipeActionButtons;
-(void)setupMuteButton;
-(void)didTapMuteButton:(id)arg1 ;
-(void)didTapDeleteButton:(id)arg1 ;
-(IGImageView *)mediaThumbnailView;
-(UILabel *)timestampLabel;
-(UIImageView *)muteIcon;
-(IGCellSwipeActionManager *)cellSwipeActionManager;
-(UIButton *)muteButton;
-(char)cellSwipeActionManagerShouldShowActions:(id)arg1 ;
-(void)cellSwipeActionManagerDidShowActions:(id)arg1 ;
-(void)cellSwipeActionManagerDidHideActions:(id)arg1 ;
-(void)peekActions;
-(void)setupDeleteButton;
-(void)setSwipeDelegate:(id<IGDirectInboxThreadCellSwipingDelegate>)arg1 ;
-(id<IGDirectInboxThreadCellSwipingDelegate>)swipeDelegate;
-(void)setIsOpen:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(UILabel *)messageLabel;
-(void)setInteractionDelegate:(id<IGDirectInboxThreadCellInteractionDelegate>)arg1 ;
-(id<IGDirectInboxThreadCellInteractionDelegate>)interactionDelegate;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(UIButton *)deleteButton;
-(IGDirectThreadAvatarView *)avatarView;
-(void)setupSubviews;
-(UIImageView *)indicatorView;
-(char)isOpen;
@end

