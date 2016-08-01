
#import <Instagram/IGLoadMoreResponseType.h>

@class NSString, NSArray;

@interface IGChannelHomeResponse : NSObject <IGLoadMoreResponseType> {

	NSString* _maxId;
	NSArray* _items;

}

@property (nonatomic,copy,readonly) NSString * maxId;              //@synthesize maxId=_maxId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * items;               //@synthesize items=_items - In the implementation block
-(NSString *)maxId;
-(id)initWithItems:(id)arg1 maxId:(id)arg2 ;
-(NSArray *)items;
@end

