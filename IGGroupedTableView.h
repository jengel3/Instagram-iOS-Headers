
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTableView.h>
#import <Instagram/IGReusableCellTableView.h>

@class NSString;

@interface IGGroupedTableView : IGTableView <IGReusableCellTableView>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)defaultCellClass;
-(id)initWithFrame:(CGRect)arg1 ;
@end

