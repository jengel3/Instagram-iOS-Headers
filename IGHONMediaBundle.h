
#import <Instagram/IGDKDiffable.h>

@class NSString, NSArray;

@interface IGHONMediaBundle : NSObject <IGDKDiffable> {

	NSString* _diffIdentifier;
	NSString* _groupID;
	NSString* _bundleID;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * groupID;               //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;                  //@synthesize items=_items - In the implementation block
-(id)diffIdentifier;
-(id)initWithGroupID:(id)arg1 bundleID:(id)arg2 items:(id)arg3 ;
-(NSString *)bundleID;
-(NSString *)groupID;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSArray *)items;
@end

