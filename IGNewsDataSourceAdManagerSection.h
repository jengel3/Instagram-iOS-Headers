
#import <Instagram/IGNewsDataSourceSection.h>

@protocol IGNewsDataSourceSectionDelegate;
@class NSString;

@interface IGNewsDataSourceAdManagerSection : NSObject <IGNewsDataSourceSection> {

	id<IGNewsDataSourceSectionDelegate> _delegate;
	unsigned _pendingAdsCount;

}

@property (assign,nonatomic) unsigned pendingAdsCount;                                         //@synthesize pendingAdsCount=_pendingAdsCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IGNewsDataSourceSectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) unsigned* numberOfRows; 
-(unsigned)pendingAdsCount;
-(void)setUpTableView:(id)arg1 ;
-(void)setPendingAdsCount:(unsigned)arg1 ;
-(char)willShowAdsManagerSection;
-(void)setDelegate:(id<IGNewsDataSourceSectionDelegate>)arg1 ;
-(id<IGNewsDataSourceSectionDelegate>)delegate;
-(NSString *)title;
-(unsigned*)numberOfRows;
-(id)tableView:(id)arg1 cellForRowAtIndex:(unsigned)arg2 ;
-(float)tableView:(id)arg1 heightForRowAtIndex:(unsigned)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned)arg2 ;
@end

