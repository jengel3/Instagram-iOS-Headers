
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IGCommentModelStyledStringCacheKey : NSObject <NSCopying> {

	unsigned _hash;
	char _newline;
	NSString* _primaryName;
	NSString* _text;
	NSString* _truncationString;
	float _width;
	int _maximumUntruncatedNumberOfLines;
	int _truncatedToNumberOfLines;

}

@property (nonatomic,copy,readonly) NSString * primaryName;                      //@synthesize primaryName=_primaryName - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * truncationString;                 //@synthesize truncationString=_truncationString - In the implementation block
@property (nonatomic,readonly) float width;                                      //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) int maximumUntruncatedNumberOfLines;              //@synthesize maximumUntruncatedNumberOfLines=_maximumUntruncatedNumberOfLines - In the implementation block
@property (nonatomic,readonly) int truncatedToNumberOfLines;                     //@synthesize truncatedToNumberOfLines=_truncatedToNumberOfLines - In the implementation block
@property (nonatomic,readonly) char newline;                                     //@synthesize newline=_newline - In the implementation block
-(id)initWithPrimaryName:(id)arg1 text:(id)arg2 truncationString:(id)arg3 width:(float)arg4 maximumUntruncatedNumberOfLines:(int)arg5 truncatedToNumberOfLines:(int)arg6 newline:(char)arg7 ;
-(int)maximumUntruncatedNumberOfLines;
-(int)truncatedToNumberOfLines;
-(char)newline;
-(NSString *)primaryName;
-(NSString *)truncationString;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(float)width;
@end

