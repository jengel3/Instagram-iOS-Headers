

@class NSNumber;

@interface IGBlendedSearchDataSourceItemContainer : NSObject {

	id _item;
	NSNumber* _position;

}

@property (nonatomic,readonly) id item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) NSNumber * position;              //@synthesize position=_position - In the implementation block
+(id)orderedSet:(id)arg1 ;
-(id)initWithJson:(id)arg1 itemCreation:(/*^block*/id)arg2 ;
-(id)description;
-(id)item;
-(NSNumber *)position;
@end

