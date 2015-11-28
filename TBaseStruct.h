
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TBaseStruct : NSObject <NSCopying, NSMutableCopying> {

	char _troot_is_immutable;

}
-(void)throwExceptionIfImmutable;
-(char)isMutable;
-(char)makeImmutable;
-(char)isImmutable;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

