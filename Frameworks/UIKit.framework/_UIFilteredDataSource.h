/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {
    int  _filterType;
    BOOL  _limitingWithSections;
    int  _maxVisibleSection;
    int  _numberOfVisibleItemsInLastSection;
    <UITableViewDataSource> * _tableDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int filterType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) <UITableViewDataSource> *tableDataSource;

- (int)_filteredNumberOfItemsGivenSection:(int)arg1 numberOfItems:(int)arg2;
- (int)filterType;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setFilterType:(int)arg1;
- (void)setTableDataSource:(id)arg1;
- (id)tableDataSource;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

@end