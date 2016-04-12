
#import <Instagram/IGDirectSaveMediaDelegate.h>

@class IGDirectContent, IGUser, NSMutableArray, IGDirectThreadViewController;

@interface IGDirectMenuController : NSObject <IGDirectSaveMediaDelegate> {

	IGDirectContent* _item;
	IGUser* _threadViewer;
	NSMutableArray* _directSaveMediaObservers;
	IGDirectThreadViewController* _viewController;

}

@property (nonatomic,retain) IGDirectContent * item;                                            //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) IGUser * threadViewer;                                             //@synthesize threadViewer=_threadViewer - In the implementation block
@property (nonatomic,retain) NSMutableArray * directSaveMediaObservers;                         //@synthesize directSaveMediaObservers=_directSaveMediaObservers - In the implementation block
@property (assign,nonatomic,__weak) IGDirectThreadViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(void)saveMediaObserverDidFinishSaving:(id)arg1 ;
-(IGUser *)threadViewer;
-(void)setThreadViewer:(IGUser *)arg1 ;
-(void)didHideMenu:(id)arg1 ;
-(void)unsend:(id)arg1 ;
-(void)flag:(id)arg1 ;
-(void)unlike:(id)arg1 ;
-(void)reportContent:(id)arg1 ;
-(NSMutableArray *)directSaveMediaObservers;
-(void)performDeleteForContent:(id)arg1 ;
-(id)initWithViewController:(id)arg1 threadViewer:(id)arg2 ;
-(void)setOrUnsetMenuForContent:(id)arg1 cell:(id)arg2 ;
-(void)performRetyForContent:(id)arg1 onCell:(id)arg2 ;
-(void)setDirectSaveMediaObservers:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(IGDirectContent *)item;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setViewController:(IGDirectThreadViewController *)arg1 ;
-(IGDirectThreadViewController *)viewController;
-(void)copy:(id)arg1 ;
-(void)setItem:(IGDirectContent *)arg1 ;
-(void)save:(id)arg1 ;
@end

