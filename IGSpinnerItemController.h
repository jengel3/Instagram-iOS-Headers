
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@class IGSpinnerCellConfiguration, NSString;

@interface IGSpinnerItemController : IGListItemController <IGListItemType> {

	IGSpinnerCellConfiguration* _config;

}

@property (nonatomic,readonly) IGSpinnerCellConfiguration * config;              //@synthesize config=_config - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id)init;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGSpinnerCellConfiguration *)config;
-(id)initWithConfiguration:(id)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

