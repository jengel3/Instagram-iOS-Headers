

#import <Instagram/Instagram-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface IGMotionManager : NSObject {

	CMMotionManager* _motionManager;
	NSOperationQueue* _gravityQueue;
	char _gravityActive;
	SCD_Struct_IG11 _gravity;

}

@property (getter=isGravityActive,nonatomic,readonly) char gravityActive;              //@synthesize gravityActive=_gravityActive - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG11 gravity;                                  //@synthesize gravity=_gravity - In the implementation block
-(void)stopGravityUpdates;
-(char)isGravityActive;
-(void)startGravityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)init;
-(SCD_Struct_IG11)gravity;
-(void)setGravity:(SCD_Struct_IG11)arg1 ;
@end

