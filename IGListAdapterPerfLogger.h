
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListAdapterUpdaterPerfDelegate.h>

@class NSString;

@interface IGListAdapterPerfLogger : NSObject <IGListAdapterUpdaterPerfDelegate> {

	NSString* _moduleName;

}

@property (nonatomic,readonly) NSString * moduleName;               //@synthesize moduleName=_moduleName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModuleName:(id)arg1 ;
-(void)listAdapterUpdater:(id)arg1 updatedWithStats:(IGListAdapterUpdaterPerfStats)arg2 ;
-(void)didCompleteUpdateForListAdapterUpdater:(id)arg1 ;
-(NSString *)moduleName;
@end

