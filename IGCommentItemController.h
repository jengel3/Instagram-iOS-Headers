
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGCommentCellInteractionDelegate.h>
#import <Instagram/IGCommentContentViewDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentItemDelegate;
@class IGCommentModel, IGBulkCommentDeleteManager, IGCommentCellRevealManager, NSString;

@interface IGCommentItemController : IGListItemController <IGCommentCellInteractionDelegate, IGCommentContentViewDelegate, IGActionSheetDelegate, IGListItemType> {

	char _isCurrentUser;
	id<IGCommentItemDelegate> _delegate;
	IGCommentModel* _comment;
	int _cellActions;
	IGBulkCommentDeleteManager* _bulkDeleteManager;
	IGCommentCellRevealManager* _cellRevealManager;

}

@property (assign,nonatomic,__weak) id<IGCommentItemDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) int cellActions;                                             //@synthesize cellActions=_cellActions - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;              //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (nonatomic,readonly) IGCommentCellRevealManager * cellRevealManager;              //@synthesize cellRevealManager=_cellRevealManager - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                                            //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapReplyForCommentCell:(id)arg1 ;
-(void)didTapReportForCommentCell:(id)arg1 ;
-(void)didTapDeleteForCommentCell:(id)arg1 ;
-(int)actionsForComment:(id)arg1 isCurrentUser:(char)arg2 ;
-(IGCommentCellRevealManager *)cellRevealManager;
-(void)prepareSubviewIndexForRemovalOfCell:(id)arg1 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(void)contentView:(id)arg1 didTapText:(id)arg2 withURL:(id)arg3 ;
-(void)contentView:(id)arg1 didTapUser:(id)arg2 ;
-(void)contentView:(id)arg1 didLongTapUser:(id)arg2 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(id)initWithBulkDeleteManager:(id)arg1 cellRevealManager:(id)arg2 isCurrentUser:(char)arg3 ;
-(int)cellActions;
-(char)isCurrentUser;
-(void)setComment:(IGCommentModel *)arg1 ;
-(void)setDelegate:(id<IGCommentItemDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCommentItemDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(void)setIsCurrentUser:(char)arg1 ;
-(IGCommentModel *)comment;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

