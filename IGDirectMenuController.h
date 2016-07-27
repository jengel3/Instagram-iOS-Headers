
#import <Instagram/IGDirectSaveMediaDelegate.h>

@protocol IGDirectViewControllerProtocol;
@class IGDirectContent, IGDirectFeedCoordinator, IGUserSession, IGUser, NSMutableArray, UIViewController, UICollectionViewCell;

@interface IGDirectMenuController : NSObject <IGDirectSaveMediaDelegate> {

	IGDirectContent* _item;
	IGDirectFeedCoordinator* _feedCoordinator;
	IGUserSession* _userSession;
	IGUser* _threadViewer;
	NSMutableArray* _directSaveMediaObservers;
	UIViewController*<IGDirectViewControllerProtocol> _viewController;
	UICollectionViewCell* _cell;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                                                //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSMutableArray * directSaveMediaObservers;                                            //@synthesize directSaveMediaObservers=_directSaveMediaObservers - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<IGDirectViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) IGDirectContent * item;                                                               //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * cell;                                                          //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) IGDirectFeedCoordinator * feedCoordinator;                                            //@synthesize feedCoordinator=_feedCoordinator - In the implementation block
-(void)didHideMenu:(id)arg1 ;
-(void)unsend:(id)arg1 ;
-(void)flag:(id)arg1 ;
-(void)unlike:(id)arg1 ;
-(void)share:(id)arg1 ;
-(void)postToFeed:(id)arg1 ;
-(IGUser *)threadViewer;
-(char)enableShareOwnMediaToFeed;
-(void)reportContent:(id)arg1 ;
-(IGDirectFeedCoordinator *)feedCoordinator;
-(NSMutableArray *)directSaveMediaObservers;
-(void)performDeleteForContent:(id)arg1 ;
-(void)saveMediaObserverDidFinishSaving:(id)arg1 ;
-(id)initWithViewController:(id)arg1 threadViewer:(id)arg2 feedCoordinator:(id)arg3 userSession:(id)arg4 ;
-(void)setOrUnsetMenuForContent:(id)arg1 cell:(id)arg2 ;
-(void)performRetyForContent:(id)arg1 onCell:(id)arg2 ;
-(void)setFeedCoordinator:(IGDirectFeedCoordinator *)arg1 ;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)setDirectSaveMediaObservers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(IGDirectContent *)item;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setViewController:(UIViewController*<IGDirectViewControllerProtocol>)arg1 ;
-(UIViewController*<IGDirectViewControllerProtocol>)viewController;
-(void)copy:(id)arg1 ;
-(void)setItem:(IGDirectContent *)arg1 ;
-(UICollectionViewCell *)cell;
-(void)setCell:(UICollectionViewCell *)arg1 ;
-(void)save:(id)arg1 ;
-(IGUserSession *)userSession;
@end

