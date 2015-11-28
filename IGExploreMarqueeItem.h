
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface IGExploreMarqueeItem : NSObject <NSCoding> {

	unsigned _type;
	NSString* _title;
	NSString* _key;
	NSArray* _marqueeImages;
	NSString* _context;
	NSString* _attribution;

}

@property (nonatomic,readonly) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSArray * marqueeImages;              //@synthesize marqueeImages=_marqueeImages - In the implementation block
@property (nonatomic,copy,readonly) NSString * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy,readonly) NSString * attribution;               //@synthesize attribution=_attribution - In the implementation block
+(unsigned)marqueeTypeForMarqueeName:(id)arg1 ;
+(void)initialize;
-(id)loggingType;
-(id)initWithType:(unsigned)arg1 title:(id)arg2 key:(id)arg3 marqueeImages:(id)arg4 context:(id)arg5 attribution:(id)arg6 ;
-(NSArray *)marqueeImages;
-(id)imageURLForSize:(CGSize)arg1 scale:(float)arg2 ;
-(id)imageURLForSize:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(unsigned)type;
-(NSString *)title;
-(NSString *)context;
-(NSString *)attribution;
@end

