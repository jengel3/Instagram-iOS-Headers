
#import <UIKit/UIRefreshControl.h>

@class NSString;

@interface RCTRefreshControl : UIRefreshControl {

	char _initialRefreshingState;
	char _isInitialRender;
	char _currentRefreshingState;
	/*^block*/id _onRefresh;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) id onRefresh;                  //@synthesize onRefresh=_onRefresh - In the implementation block
-(void)refreshControlValueChanged;
-(id)onRefresh;
-(void)setOnRefresh:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)setTitleColor:(id)arg1 ;
-(void)setRefreshing:(char)arg1 ;
@end

