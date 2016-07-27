
#import <Instagram/IGShareServiceConfigureManagerDelegate.h>

@protocol IGShareListManagerDelegate;
@class NSArray, IGShareServiceConfigureManager, NSString;

@interface IGShareListManager : NSObject <IGShareServiceConfigureManagerDelegate> {

	char _locationEnabled;
	char _showFullList;
	id<IGShareListManagerDelegate> _delegate;
	int _shortListCount;
	NSArray* _services;
	IGShareServiceConfigureManager* _configureManager;

}

@property (nonatomic,retain) NSArray * services;                                             //@synthesize services=_services - In the implementation block
@property (nonatomic,retain) IGShareServiceConfigureManager * configureManager;              //@synthesize configureManager=_configureManager - In the implementation block
@property (assign,nonatomic) int shortListCount;                                             //@synthesize shortListCount=_shortListCount - In the implementation block
@property (assign,nonatomic) char locationEnabled;                                           //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGShareListManagerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char showFullList;                                              //@synthesize showFullList=_showFullList - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMediaType:(int)arg1 locationAvailable:(char)arg2 ;
-(id)analyticsExtra;
-(IGShareServiceConfigureManager *)configureManager;
-(id)orderedServiceTypesForServiceList:(id)arg1 ;
-(void)updateShareServiceWillShare:(char)arg1 index:(int)arg2 ;
-(void)configureStickyShareService:(id)arg1 withValue:(char)arg2 ;
-(char)serviceWillShare:(id)arg1 ;
-(id)viewControllerForShareConfiguration;
-(void)setShortListCount:(int)arg1 ;
-(int)numberOfShareServices;
-(id)shareServiceAtIndex:(int)arg1 ;
-(char)readyToShare;
-(void)toggleShareServiceAtIndex:(int)arg1 ;
-(char)locationEnabled;
-(char)showFullList;
-(void)setShowFullList:(char)arg1 ;
-(int)shortListCount;
-(void)setConfigureManager:(IGShareServiceConfigureManager *)arg1 ;
-(id)sharingInfo;
-(void)setPresentationStyle:(int)arg1 ;
-(void)setDelegate:(id<IGShareListManagerDelegate>)arg1 ;
-(void)reloadData;
-(id<IGShareListManagerDelegate>)delegate;
-(void)setLocationEnabled:(char)arg1 ;
-(NSArray *)services;
-(void)setServices:(NSArray *)arg1 ;
@end

