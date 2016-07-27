
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGCellSwipeActionManagerActionDelegate.h>

@protocol IGDirectInboxThreadCellInteractionDelegate, IGDirectInboxThreadCellSwipingDelegate;
@class UIImageView, IGDirectThreadAvatarView, UILabel, IGImageView, IGBlurredImageView, IGCellSwipeActionManager, UIButton, UIImage, NSString;

@interface IGDirectInboxThreadCell : UICollectionViewCell <IGCellSwipeActionManagerActionDelegate> {

	char _isOpen;
	char _isEditable;
	char _isSelected;
	id<IGDirectInboxThreadCellInteractionDelegate> _interactionDelegate;
	id<IGDirectInboxThreadCellSwipingDelegate> _swipeDelegate;
	UIImageView* _indicatorView;
	IGDirectThreadAvatarView* _avatarView;
	UILabel* _nameLabel;
	UILabel* _messageLabel;
	UILabel* _timestampLabel;
	UIImageView* _muteIcon;
	IGImageView* _mediaThumbnailView;
	IGBlurredImageView* _blurredMediaThumbnailView;
	IGCellSwipeActionManager* _cellSwipeActionManager;
	UIButton* _primaryButton;
	UIButton* _destructiveButton;
	UIImageView* _selectView;
	UIImage* _selectedMark;
	UIImage* _deselectedMark;

}

@property (nonatomic,readonly) UIImageView * indicatorView;                                                          //@synthesize indicatorView=_indicatorView - In the implementation block
@property (nonatomic,readonly) IGDirectThreadAvatarView * avatarView;                                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                                                                  //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * messageLabel;                                                               //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UILabel * timestampLabel;                                                             //@synthesize timestampLabel=_timestampLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * muteIcon;                                                               //@synthesize muteIcon=_muteIcon - In the implementation block
@property (nonatomic,readonly) IGImageView * mediaThumbnailView;                                                     //@synthesize mediaThumbnailView=_mediaThumbnailView - In the implementation block
@property (nonatomic,readonly) IGBlurredImageView * blurredMediaThumbnailView;                                       //@synthesize blurredMediaThumbnailView=_blurredMediaThumbnailView - In the implementation block
@property (nonatomic,readonly) IGCellSwipeActionManager * cellSwipeActionManager;                                    //@synthesize cellSwipeActionManager=_cellSwipeActionManager - In the implementation block
@property (nonatomic,readonly) UIButton * primaryButton;                                                             //@synthesize primaryButton=_primaryButton - In the implementation block
@property (nonatomic,readonly) UIButton * destructiveButton;                                                         //@synthesize destructiveButton=_destructiveButton - In the implementation block
@property (assign,nonatomic) char isOpen;                                                                            //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic) char isEditable;                                                                        //@synthesize isEditable=_isEditable - In the implementation block
@property (assign,nonatomic) char isSelected;                                                                        //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,readonly) UIImageView * selectView;                                                             //@synthesize selectView=_selectView - In the implementation block
@property (nonatomic,readonly) UIImage * selectedMark;                                                               //@synthesize selectedMark=_selectedMark - In the implementation block
@property (nonatomic,readonly) UIImage * deselectedMark;                                                             //@synthesize deselectedMark=_deselectedMark - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadCellInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadCellSwipingDelegate> swipeDelegate;                        //@synthesize swipeDelegate=_swipeDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showActions:(char)arg1 animated:(char)arg2 ;
-(IGImageView *)mediaThumbnailView;
-(IGBlurredImageView *)blurredMediaThumbnailView;
-(void)updateSelectBox;
-(UIImageView *)selectView;
-(UIImage *)selectedMark;
-(UIImage *)deselectedMark;
-(void)setupIndicatorView;
-(void)setupAvatarView;
-(void)setupUsernameLabel;
-(void)setupMessageLabel;
-(void)setupTimestampLabel;
-(void)setupMuteIcon;
-(void)setupMediaThumbnailView;
-(void)setupSwipeActionButtons;
-(void)setupSelectView;
-(void)setupPrimaryButton;
-(void)setupDestructiveButton;
-(void)didTapPrimaryButton:(id)arg1 ;
-(void)didTapDestructiveButton:(id)arg1 ;
-(void)layoutSelectView;
-(UILabel *)timestampLabel;
-(UIImageView *)muteIcon;
-(IGCellSwipeActionManager *)cellSwipeActionManager;
-(void)applyButtonConfig:(id)arg1 ;
-(void)configureBlurThumbnailWithViewModel:(id)arg1 ;
-(UIButton *)primaryButton;
-(char)cellSwipeActionManagerShouldShowActions:(id)arg1 ;
-(void)cellSwipeActionManagerDidShowActions:(id)arg1 ;
-(void)cellSwipeActionManagerDidHideActions:(id)arg1 ;
-(void)peekActions;
-(void)configureWithViewModel:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)setSwipeDelegate:(id<IGDirectInboxThreadCellSwipingDelegate>)arg1 ;
-(id<IGDirectInboxThreadCellSwipingDelegate>)swipeDelegate;
-(void)setIsOpen:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)isEditable;
-(char)isSelected;
-(void)prepareForReuse;
-(UILabel *)messageLabel;
-(void)setInteractionDelegate:(id<IGDirectInboxThreadCellInteractionDelegate>)arg1 ;
-(id<IGDirectInboxThreadCellInteractionDelegate>)interactionDelegate;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(UIButton *)destructiveButton;
-(void)setIsSelected:(char)arg1 ;
-(void)setIsEditable:(char)arg1 ;
-(IGDirectThreadAvatarView *)avatarView;
-(void)setupSubviews;
-(UIImageView *)indicatorView;
-(char)isOpen;
@end

