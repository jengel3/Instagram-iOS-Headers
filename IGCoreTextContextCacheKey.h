
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface IGCoreTextContextCacheKey : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	float _constrainedWidth;
	float _constrainedHeightMin;
	float _constrainedHeightMax;
	unsigned _hash;

}
-(id)initWithAttributedString:(id)arg1 constrainedWidth:(float)arg2 constrainedHeightMin:(float)arg3 constrainedHeightMax:(float)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

