
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Instagram/IGCellSwipeActionManagerDelegate.h>

@protocol IGCommentCellDelegate;
@class IGCommentContentView, UIView, UIButton, CALayer, IGCellSwipeActionManager, NSString;

@interface IGCommentCell : UICollectionViewCell <IGCellSwipeActionManagerDelegate> {

	char _isShowingEditActions;
	char _showActions;
	IGCommentContentView* _commentView;
	id<IGCommentCellDelegate> _delegate;
	UIView* _separatorView;
	UIButton* _replyButton;
	UIButton* _deleteButton;
	UIButton* _reportButton;
	CALayer* _reportButtonSeparatorLayer;
	IGCellSwipeActionManager* _cellSwipeActionManager;
	float _beginningX;
	int _maxActionBarWidth;

}

@property (nonatomic,readonly) IGCommentContentView * commentView;                           //@synthesize commentView=_commentView - In the implementation block
@property (nonatomic,readonly) char isShowingEditActions;                                    //@synthesize isShowingEditActions=_isShowingEditActions - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentCellDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,readonly) UIButton * replyButton;                                       //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,readonly) UIButton * deleteButton;                                      //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,readonly) UIButton * reportButton;                                      //@synthesize reportButton=_reportButton - In the implementation block
@property (nonatomic,readonly) CALayer * reportButtonSeparatorLayer;                         //@synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer - In the implementation block
@property (nonatomic,retain) IGCellSwipeActionManager * cellSwipeActionManager;              //@synthesize cellSwipeActionManager=_cellSwipeActionManager - In the implementation block
@property (assign,nonatomic) float beginningX;                                               //@synthesize beginningX=_beginningX - In the implementation block
@property (assign,nonatomic) char showActions;                                               //@synthesize showActions=_showActions - In the implementation block
@property (assign,nonatomic) int maxActionBarWidth;                                          //@synthesize maxActionBarWidth=_maxActionBarWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupReplyButton;
-(void)setupReportButton;
-(IGCommentContentView *)commentView;
-(void)reportButtonTapped:(id)arg1 ;
-(void)replyButtonTapped:(id)arg1 ;
-(UIButton *)reportButton;
-(UIButton *)replyButton;
-(void)setCellSwipeActionManager:(IGCellSwipeActionManager *)arg1 ;
-(IGCellSwipeActionManager *)cellSwipeActionManager;
-(void)showActions:(char)arg1 duration:(float)arg2 ;
-(void)setShowActions:(char)arg1 ;
-(void)toggleActions;
-(char)isShowingEditActions;
-(void)showActions:(char)arg1 animated:(char)arg2 ;
-(void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2 ;
-(void)peekActions;
-(CALayer *)reportButtonSeparatorLayer;
-(float)beginningX;
-(void)setBeginningX:(float)arg1 ;
-(char)showActions;
-(int)maxActionBarWidth;
-(void)setMaxActionBarWidth:(int)arg1 ;
-(void)setupDeleteButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGCommentCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<IGCommentCellDelegate>)delegate;
-(UIView *)separatorView;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)deleteButtonTapped:(id)arg1 ;
-(UIButton *)deleteButton;
-(void)setActionButtons:(int)arg1 ;
@end

