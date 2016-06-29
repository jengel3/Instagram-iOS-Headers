

@class UIViewController, NSMutableArray;

@interface IGScreenshotObserver : NSObject {

	UIViewController* _controller;
	NSMutableArray* _extraLogBlocks;

}

@property (assign,nonatomic,__weak) UIViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraLogBlocks;                   //@synthesize extraLogBlocks=_extraLogBlocks - In the implementation block
-(void)addExtraLogBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)extraLogBlocks;
-(void)onTakenScreenshot;
-(id)initForController:(id)arg1 ;
-(void)setExtraLogBlocks:(NSMutableArray *)arg1 ;
-(void)startObserving;
-(void)dealloc;
-(UIViewController *)controller;
-(void)setController:(UIViewController *)arg1 ;
-(void)stopObserving;
@end

