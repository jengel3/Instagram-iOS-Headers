

#import <Instagram/Instagram-Structs.h>
@interface JKSerializer : NSObject {

	JKEncodeState* encodeState;

}
+(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(id)serializeObject:(id)arg1 options:(unsigned)arg2 encodeOption:(unsigned)arg3 block:(/*^block*/id)arg4 delegate:(id)arg5 selector:(SEL)arg6 error:(id*)arg7 ;
-(void)releaseState;
-(void)dealloc;
@end

