
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGDKDiffable.h>

@class NSArray, NSString;

@interface IGExploreTrend : NSObject <NSCoding, IGDKDiffable> {

	NSArray* _items;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)diffIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithItems:(id)arg1 title:(id)arg2 ;
@end

