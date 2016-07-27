
#import <Instagram/RCTShadowView.h>

@interface RCTRootShadowView : RCTShadowView {

	int _sizeFlexibility;

}

@property (assign,nonatomic) int sizeFlexibility;              //@synthesize sizeFlexibility=_sizeFlexibility - In the implementation block
-(void)setSizeFlexibility:(int)arg1 ;
-(int)sizeFlexibility;
-(id)collectViewsWithUpdatedFrames;
-(void)applySizeConstraints;
-(id)init;
@end

