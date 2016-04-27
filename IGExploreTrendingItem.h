
#import <libobjc.A.dylib/NSCoding.h>
#import <Instagram/IGRelatedItemDisplayType.h>

@class IGPostItem, NSArray, NSString, IGLocation;

@interface IGExploreTrendingItem : NSObject <NSCoding, IGRelatedItemDisplayType> {

	IGPostItem* _topPostItem;
	NSArray* _postItems;
	NSString* _title;
	NSString* _subtitle;
	NSString* _key;
	unsigned _type;
	IGLocation* _location;

}

@property (nonatomic,readonly) IGPostItem * topPostItem;              //@synthesize topPostItem=_topPostItem - In the implementation block
@property (nonatomic,copy,readonly) NSArray * postItems;              //@synthesize postItems=_postItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) NSString * key;                        //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) IGLocation * location;                 //@synthesize location=_location - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)imageURLsWithWidth:(float)arg1 ;
-(id)videoIconsVisible;
-(id)initWithPostItems:(id)arg1 title:(id)arg2 subtitle:(id)arg3 key:(id)arg4 type:(unsigned)arg5 location:(id)arg6 ;
-(NSArray *)postItems;
-(IGPostItem *)topPostItem;
-(id)relatedItemDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(unsigned)type;
-(NSString *)title;
-(NSString *)subtitle;
-(IGLocation *)location;
@end

