

#import <Instagram/Instagram-Structs.h>
@interface FBSDKMath : NSObject
+(unsigned)hashWithIntegerArray:(unsigned*)arg1 count:(unsigned)arg2 ;
+(unsigned)hashWithInteger:(unsigned)arg1 ;
+(unsigned)hashWithInteger:(unsigned)arg1 andInteger:(unsigned)arg2 ;
+(CGSize)ceilForSize:(CGSize)arg1 ;
+(unsigned)hashWithFloat:(float)arg1 ;
+(unsigned)hashWithLong:(unsigned long long)arg1 ;
+(unsigned)hashWithPointer:(const void*)arg1 ;
+(CGPoint)ceilForPoint:(CGPoint)arg1 ;
+(CGPoint)floorForPoint:(CGPoint)arg1 ;
+(CGSize)floorForSize:(CGSize)arg1 ;
+(unsigned)hashWithCGFloat:(float)arg1 ;
+(unsigned)hashWithCString:(const char*)arg1 ;
+(unsigned)hashWithDouble:(double)arg1 ;
-(id)init;
@end

