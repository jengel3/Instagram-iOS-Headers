
#import <libobjc.A.dylib/NSCoding.h>

@interface CPTTheme : NSObject <NSCoding> {

	Class graphClass;

}

@property (nonatomic,retain) Class graphClass; 
+(id)themeNamed:(id)arg1 ;
+(id)themeClasses;
+(void)registerTheme:(Class)arg1 ;
+(id)name;
-(void)applyThemeToGraph:(id)arg1 ;
-(Class)graphClass;
-(void)setGraphClass:(Class)arg1 ;
-(id)newGraph;
-(void)applyThemeToBackground:(id)arg1 ;
-(void)applyThemeToPlotArea:(id)arg1 ;
-(void)applyThemeToAxisSet:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
@end

