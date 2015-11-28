
#import <Instagram/IGGroupedTableViewProfileCell.h>

@class IGTextField;

@interface IGUserProfileGroupedTableViewCell : IGGroupedTableViewProfileCell

@property (nonatomic,readonly) IGTextField * fullNameField; 
@property (nonatomic,readonly) IGTextField * usernameField; 
-(id)accessibleElements;
-(IGTextField *)fullNameField;
-(IGTextField *)usernameField;
-(id)init;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
@end

