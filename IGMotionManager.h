

#import <Instagram/Instagram-Structs.h>
@class CMMotionManager, NSOperationQueue;

@interface IGMotionManager : NSObject {

	CMMotionManager* _motionManager;
	NSOperationQueue* _gravityQueue;
	char _gravityActive;
	SCD_Struct_IG73 _gravity;

}

@property (getter=isGravityActive,nonatomic,readonly) char gravityActive;              //@synthesize gravityActive=_gravityActive - In the implementation block
@property (assign,nonatomic) SCD_Struct_IG73 gravity;                                  //@synthesize gravity=_gravity - In the implementation block
-(void)startGravityUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)stopGravityUpdates;
-(char)isGravityActive;
-(id)init;
-(SCD_Struct_IG73)gravity;
-(void)setGravity:(SCD_Struct_IG73)arg1 ;
@end

