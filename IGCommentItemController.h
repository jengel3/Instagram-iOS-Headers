
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGCommentCellDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGCommentStoryDelegate;
@class IGCommentModel, IGBulkCommentDeleteManager, NSString;

@interface IGCommentItemController : IGListItemController <IGCommentCellDelegate, IGActionSheetDelegate, IGListItemType> {

	char _isCurrentUser;
	id<IGCommentStoryDelegate> _delegate;
	IGCommentModel* _comment;
	int _cellActions;
	IGBulkCommentDeleteManager* _bulkDeleteManager;

}

@property (assign,nonatomic,__weak) id<IGCommentStoryDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IGCommentModel * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) int cellActions;                                             //@synthesize cellActions=_cellActions - In the implementation block
@property (nonatomic,readonly) IGBulkCommentDeleteManager * bulkDeleteManager;              //@synthesize bulkDeleteManager=_bulkDeleteManager - In the implementation block
@property (assign,nonatomic) char isCurrentUser;                                            //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapReplyForCommentCell:(id)arg1 ;
-(void)didTapReportForCommentCell:(id)arg1 ;
-(void)didTapDeleteForCommentCell:(id)arg1 ;
-(int)actionsForComment:(id)arg1 isCurrentUser:(char)arg2 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(IGBulkCommentDeleteManager *)bulkDeleteManager;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(id)cellClasses;
-(unsigned)numberOfItemsInListAdapter:(id)arg1 ;
-(CGSize)listAdapter:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(id)listAdapter:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)listAdapter:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(id)initWithBulkDeleteManager:(id)arg1 isCurrentUser:(char)arg2 ;
-(int)cellActions;
-(char)isCurrentUser;
-(void)setComment:(IGCommentModel *)arg1 ;
-(void)setDelegate:(id<IGCommentStoryDelegate>)arg1 ;
-(void)dealloc;
-(id<IGCommentStoryDelegate>)delegate;
-(void)setIsCurrentUser:(char)arg1 ;
-(IGCommentModel *)comment;
@end

