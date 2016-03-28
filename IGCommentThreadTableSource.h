
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGBulkCommentDeleteManagerDelegate.h>
#import <Instagram/IGCommentTableCellDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGRealtimeOperationDelegate.h>

@protocol IGCommentThreadTableSourceDelegate;
@class NSIndexPath, IGPost, UITableView, UINavigationController, IGRealtimeManager, IGBulkCommentDeleteManager, NSArray, NSString;

@interface IGCommentThreadTableSource : NSObject <IGBulkCommentDeleteManagerDelegate, IGCommentTableCellDelegate, UITableViewDataSource, UITableViewDelegate, IGActionSheetDelegate, IGRealtimeOperationDelegate> {

	NSIndexPath* _tappedIndexPath;
	char _isFlaggingComment;
	char _isDeletingComment;
	char _isLoading;
	char _shouldSuppressReloadData;
	char _enableCommentCellSwipeToDelete;
	char _isLoadingMore;
	IGPost* _post;
	id<IGCommentThreadTableSourceDelegate> _controller;
	UITableView* _tableView;
	UINavigationController* _navigationController;
	IGRealtimeManager* _realtimeManager;
	IGBulkCommentDeleteManager* _bulkCommentDeleteManager;

}

@property (nonatomic,retain) IGPost * post;                                                         //@synthesize post=_post - In the implementation block
@property (assign,nonatomic,__weak) id<IGCommentThreadTableSourceDelegate> controller;              //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                  //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * activeCaptionAndComments; 
@property (nonatomic,__weak,readonly) NSArray * activeComments; 
@property (assign,nonatomic) char isLoading;                                                        //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,readonly) char isEditing; 
@property (assign,nonatomic) char shouldSuppressReloadData;                                         //@synthesize shouldSuppressReloadData=_shouldSuppressReloadData - In the implementation block
@property (assign,nonatomic) char enableCommentCellSwipeToDelete;                                   //@synthesize enableCommentCellSwipeToDelete=_enableCommentCellSwipeToDelete - In the implementation block
@property (nonatomic,retain) IGRealtimeManager * realtimeManager;                                   //@synthesize realtimeManager=_realtimeManager - In the implementation block
@property (assign,nonatomic) char isLoadingMore;                                                    //@synthesize isLoadingMore=_isLoadingMore - In the implementation block
@property (nonatomic,retain) IGBulkCommentDeleteManager * bulkCommentDeleteManager;                 //@synthesize bulkCommentDeleteManager=_bulkCommentDeleteManager - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)commentDeletionFinished:(id)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(IGRealtimeManager *)realtimeManager;
-(void)handleRealtimeOperation:(id)arg1 ;
-(id)pkForRealtimeOperation:(id)arg1 ;
-(void)handleRealtimeRefreshRequest;
-(void)unsubscribeFromRealtime;
-(IGBulkCommentDeleteManager *)bulkCommentDeleteManager;
-(char)isLoadingMore;
-(void)commitBulkCommentDeletion;
-(void)undoBulkCommentDeletion;
-(void)commentDeleteManagerDidAddCommentToDelete:(id)arg1 numberOfCommentsToDelete:(int)arg2 ;
-(void)commentDeleteManagerDidStartCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFinishCommentDeletion:(id)arg1 ;
-(void)commentDeleteManagerDidFailToDeleteComments:(id)arg1 ;
-(void)commentCellDidShowActions:(id)arg1 ;
-(void)commentCellDidHideActions:(id)arg1 ;
-(void)commentCell:(id)arg1 didLongTapOnUser:(id)arg2 ;
-(void)commentCellUserTapped:(id)arg1 ;
-(void)commentCellReplyButtonTapped:(id)arg1 ;
-(void)commentCellDeleteButtonTapped:(id)arg1 ;
-(void)commentCellReportButtonTapped:(id)arg1 ;
-(void)commentCellDidStartPanGestureRecognition:(id)arg1 ;
-(void)commentCellWillSwipeToDelete:(id)arg1 ;
-(void)commentCellDidSwipeToDelete:(id)arg1 ;
-(char)commentCellShouldShowActions:(id)arg1 ;
-(void)setShouldSuppressReloadData:(char)arg1 ;
-(NSArray *)activeComments;
-(id)indexPathForCommentModel:(id)arg1 ;
-(void)setIsLoadingMore:(char)arg1 ;
-(void)setRealtimeManager:(IGRealtimeManager *)arg1 ;
-(void)loadCommentsWithLoadMore:(char)arg1 ;
-(void)onPostUpdated:(id)arg1 ;
-(void)feedItemCommentsRequestFailed:(id)arg1 ;
-(id)tableView:(id)arg1 cellForCommentModel:(id)arg2 atIndexPath:(id)arg3 ;
-(id)inlineLoadMoreRowForTableView:(id)arg1 ;
-(id)commentModelAtIndexPath:(id)arg1 ;
-(char)enableCommentCellSwipeToDelete;
-(NSArray *)activeCaptionAndComments;
-(void)replyToUser:(id)arg1 inCommentCell:(id)arg2 ;
-(void)handleDeleteCommentActionForCell:(id)arg1 ;
-(void)showFlaggingActionSheet;
-(void)removeCommentInCell:(id)arg1 delete:(char)arg2 reportWithReason:(int)arg3 ;
-(char)shouldSuppressReloadData;
-(void)showActionSheetForComment:(id)arg1 ;
-(void)postCommentWithText:(id)arg1 ;
-(void)reloadAndMaybeSubscribeRealtime;
-(void)setEnableCommentCellSwipeToDelete:(char)arg1 ;
-(void)setBulkCommentDeleteManager:(IGBulkCommentDeleteManager *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(char)isEditing;
-(UINavigationController *)navigationController;
-(char)isLoading;
-(id<IGCommentThreadTableSourceDelegate>)controller;
-(void)setController:(id<IGCommentThreadTableSourceDelegate>)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)setIsLoading:(char)arg1 ;
@end

