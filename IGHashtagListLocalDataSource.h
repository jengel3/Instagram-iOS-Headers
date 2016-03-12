
#import <Instagram/IGAutocompleteAbstractDataSource.h>
#import <Instagram/IGAutocompleteDataSource.h>

@class NSString;

@interface IGHashtagListLocalDataSource : IGAutocompleteAbstractDataSource <IGAutocompleteDataSource>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hashtagModelArrayFromMixedHashtagArray:(id)arg1 ;
-(id)resultForRow:(int)arg1 ;
-(void)setFilteredResults:(id)arg1 ;
-(void)filterHashtags:(id)arg1 ;
@end

