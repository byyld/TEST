
// 查询报警项
for(int i=0; i < m_worksetfile->m_alarm_array.size(); i++)
{
    if(m_worksetfile->m_alarm_array[i].first == QString::number(static_dataArray))
    {
        alarm_item = m_worksetfile->m_alarm_array[i].second;
    }
}
