
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewController.h>

@interface RCTModalHostViewController : UIViewController {

	CGRect _lastViewFrame;
	/*^block*/id _boundsDidChangeBlock;

}

@property (nonatomic,copy) id boundsDidChangeBlock;              //@synthesize boundsDidChangeBlock=_boundsDidChangeBlock - In the implementation block
-(void)setBoundsDidChangeBlock:(id)arg1 ;
-(id)boundsDidChangeBlock;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
@end

