
#import <UIKit/UICollectionViewTransitionLayout.h>

@interface IGDirectThreadTransitionLayout : UICollectionViewTransitionLayout {

	/*^block*/id _progressCallback;

}

@property (nonatomic,copy) id progressCallback;              //@synthesize progressCallback=_progressCallback - In the implementation block
-(id)progressCallback;
-(void)setProgressCallback:(id)arg1 ;
-(void)dealloc;
-(void)setTransitionProgress:(float)arg1 ;
@end

