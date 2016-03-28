
@class NSString;


@protocol IGNewsDataSourceSection <NSObject>
@property (assign,nonatomic,__weak) id<IGNewsDataSourceSectionDelegate> delegate; 
@property (readonly) NSString * title; 
@property (readonly) unsigned* numberOfRows; 
@required
-(void)setUpTableView:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id<IGNewsDataSourceSectionDelegate>)delegate;
-(NSString *)title;
-(unsigned*)numberOfRows;
-(id)tableView:(id)arg1 cellForRowAtIndex:(unsigned)arg2;
-(float)tableView:(id)arg1 heightForRowAtIndex:(unsigned)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndex:(unsigned)arg2;

@end

