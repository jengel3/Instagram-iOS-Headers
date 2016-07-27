
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGCommentCellInteractionDelegate.h>
#import <Instagram/IGCommentContentViewDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentItemDelegate;
@class IGCommentListItem, IGBulkCommentDeleteManager, IGCommentCellRevealManager, IGHeaderFooterSupplementaryViewSource, NSString;

@interface IGCommentItemController : IGListItemController <IGCommentCellInteractionDelegate, IGCommentContentViewDelegate, IGActionSheetDelegate, IGListItemType> {

	char _isCurrentUser;
	char _canShowRetryButton;
	char _canShowVerifiedBadge;
	char _enableCommentLikes;
	id<IGCommentItemDelegate> _delegate;
	IGCommentListItem* _commentListItem;
	int _cellActions;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	IGCommentCellRevealManager* _cellRevealManager;
	IGHeaderFooterSupplementaryViewSource* _compositedViewSource;

}

@property (nonatomic,readonly) IGCommentListItem * commentListItem;                                     //@synthesize commentListItem=_commentListItem - In the implementation block
@property (nonatomic,readonly) int cellActions;                                                         //@synthesize cellActions=_cellActions - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;                          //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) IGCommentCellRevealManager * cellRevealManager;                          //@synthesize cellRevealManager=_cellRevealManager - In the implementation block
@property (nonatomic,readonly) char isCurrentUser;                                                      //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (nonatomic,readonly) char canShowRetryButton;                                                 //@synthesize canShowRetryButton=_canShowRetryButton - In the implementation block
@property (nonatomic,readonly) char canShowVerifiedBadge;                                               //@synthesize canShowVerifiedBadge=_canShowVerifiedBadge - In the implementation block
@property (nonatomic,retain) IGHeaderFooterSupplementaryViewSource * compositedViewSource;              //@synthesize compositedViewSource=_compositedViewSource - In the implementation block
@property (assign,nonatomic) char enableCommentLikes;                                                   //@synthesize enableCommentLikes=_enableCommentLikes - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentItemDelegate> delegate;                                 //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)supplementaryViewSource;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)didTapReplyForCommentCell:(id)arg1 ;
-(void)didTapReportForCommentCell:(id)arg1 ;
-(void)didTapDeleteForCommentCell:(id)arg1 ;
-(IGCommentListItem *)commentListItem;
-(char)canShowVerifiedBadge;
-(char)canShowRetryButton;
-(int)actionsForComment:(id)arg1 isCurrentUser:(char)arg2 ;
-(IGHeaderFooterSupplementaryViewSource *)compositedViewSource;
-(void)prepareSubviewIndexForRemovalOfCell:(id)arg1 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)contentView:(id)arg1 didTapUser:(id)arg2 ;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2 ;
-(void)contentViewDidTapRetry:(id)arg1 ;
-(int)cellActions;
-(void)setCompositedViewSource:(IGHeaderFooterSupplementaryViewSource *)arg1 ;
-(void)setEnableCommentLikes:(char)arg1 ;
-(char)enableCommentLikes;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(IGCommentCellRevealManager *)cellRevealManager;
-(id)initWithBulkDeleteManager:(id)arg1 cellRevealManager:(id)arg2 isCurrentUser:(char)arg3 ;
-(char)isCurrentUser;
-(void)setDelegate:(id<IGCommentItemDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCommentItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

